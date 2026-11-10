/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e7bc8; name: FUN_.text__001e7bc8
 */


void FUN__text__001e7bc8(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN__text__00139e64(*param_2,*(undefined4 *)(param_2 + 2));
  if (*(int *)(param_2 + 1) != 0) {
    FUN__text__0013a1b8(*param_2,3,*(undefined4 *)(param_2 + 2));
  }
  iVar2 = *param_3;
  if (iVar2 - 3U < 0xfffffffc) {
    iVar2 = -1;
  }
  iVar1 = 3;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN__text__0013a628(*param_2,*(undefined4 *)(param_2 + 2),0,iVar1);
  iVar2 = param_3[1];
  if (iVar2 - 3U < 0xfffffffc) {
    iVar2 = -1;
  }
  iVar1 = 3;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN__text__0013a628(*param_2,*(undefined4 *)(param_2 + 2),1,iVar1);
  iVar2 = param_3[2];
  if (iVar2 - 3U < 0xfffffffc) {
    iVar2 = -1;
  }
  iVar1 = 3;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN__text__0013a628(*param_2,*(undefined4 *)(param_2 + 2),2,iVar1);
  iVar2 = param_3[3];
  if (iVar2 - 3U < 0xfffffffc) {
    iVar2 = -1;
  }
  iVar1 = 3;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN__text__0013a628(*param_2,*(undefined4 *)(param_2 + 2),3,iVar1);
  iVar2 = param_3[4];
  if (iVar2 - 3U < 0xfffffffc) {
    iVar2 = -1;
  }
  iVar1 = 3;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN__text__0013a628(*param_2,*(undefined4 *)(param_2 + 2),4,iVar1);
  iVar2 = param_3[5];
  if (iVar2 - 3U < 0xfffffffc) {
    iVar2 = -1;
  }
  iVar1 = 3;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN__text__0013a628(*param_2,*(undefined4 *)(param_2 + 2),5,iVar1);
  return;
}


