BinaryTreeNode* Construct(int* preorder,int* inorder,int len)
{
	if(preorder==nullptr || inorder == nullptr || len<=0)
	{
		return nullptr;
	}

	return ConstructCore(preorder,preorder+len-1,inorder,inorder+len-1);
}

BinaryTreeNode* ConstructCore(int* startPreorder,int* endPreorder, int* startPreorder, int* endInorder)
{
	int rootVal = startPreorder[0];
	BinaryTreeNode* root = new BinaryTreeNode();
	root->m_nVal = rootVal;
	root->m_pLeft = root->m_pRight = nullptr;

	if(startPreorder == endPreorder)
	{
		if(startInorder == endInorder && *startPreorder == *startInorder) return root;
   		else
			throw std::exception("Invalid input");
	}

	int* rootInorder = startInorder;
	while(rootInorder <= endInorder && *rootInorder != rootVal)
		++rootInorder;//no duplicate is important

	if(rootInorder ==endInorder && *rootInorder != rootVal)
		throw std::exception("Invalid input");

	int leftLen = rootInorder - startInorder;
	int* leftPreorderEnd = startPreorder+leftLen;
	if(leftLen >0)
	{
		root->m_pLeft = ConstructCore();
	}
	if(leftLen < endPreorder - startPreorder)
	{
		root->m_pRight = ConstructCore();
	}
	return root;

}
