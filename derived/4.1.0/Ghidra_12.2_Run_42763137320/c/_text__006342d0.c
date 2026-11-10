/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006342d0; name: FUN_.text__006342d0
 */


void FUN__text__006342d0(long param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,*(undefined1 *)(param_1 + 0x54));
  uVar7 = 0;
  if (iVar1 != param_2) {
    uVar7 = 1;
    iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
    if (iVar1 != param_2) {
      uVar7 = 2;
      iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54)
                                 );
      if (iVar1 != param_2) {
        uVar7 = 3;
        iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,
                                    *(undefined1 *)(param_1 + 0x54));
        if (iVar1 != param_2) {
          return;
        }
      }
    }
  }
  uVar2 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),uVar7,param_3,*(undefined1 *)(param_1 + 0x54)
                     );
  uVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar4 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar5 = FUN__text__0063cbb8(uVar3,uVar4,*(undefined1 *)(param_1 + 0x54));
  if ((uVar5 & 0xff) < (uVar2 & 0xff)) {
    FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),uVar7,uVar5,*(undefined1 *)(param_1 + 0x54)
                       );
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    *(int *)(param_4 + 0x18) = param_2;
    iVar1 = *(int *)(param_4 + 8);
  }
  else if (*(int *)(param_4 + 0x1c) == 0) {
    *(int *)(param_4 + 0x1c) = param_2;
    iVar1 = *(int *)(param_4 + 8);
  }
  else if (*(int *)(param_4 + 0x20) == 0) {
    *(int *)(param_4 + 0x20) = param_2;
    iVar1 = *(int *)(param_4 + 8);
  }
  else if (*(int *)(param_4 + 0x24) == 0) {
    *(int *)(param_4 + 0x24) = param_2;
    iVar1 = *(int *)(param_4 + 8);
  }
  else {
    iVar1 = *(int *)(param_4 + 8);
  }
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else if (*(int *)(param_4 + 0xc) == 0) {
    lVar6 = 1;
  }
  else if (*(int *)(param_4 + 0x10) == 0) {
    lVar6 = 2;
  }
  else {
    if (*(int *)(param_4 + 0x14) != 0) {
      return;
    }
    lVar6 = 3;
  }
  *(undefined4 *)(param_4 + 8 + lVar6 * 4) = param_3;
  return;
}


