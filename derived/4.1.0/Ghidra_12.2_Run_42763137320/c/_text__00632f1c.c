/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632f1c; name: FUN_.text__00632f1c
 */


void FUN__text__00632f1c(long param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,uVar1);
  if ((((iVar2 == param_2) ||
       (iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,uVar1), iVar2 == param_2)) ||
      (iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,uVar1), iVar2 == param_2)) ||
     (iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,uVar1), iVar2 == param_2)) {
    return;
  }
  iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,*(undefined1 *)(param_1 + 0x54));
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
    if (iVar2 != 0) {
      uVar6 = 2;
      iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54)
                                 );
      if (iVar2 != 0) {
        uVar6 = 3;
        iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,
                                    *(undefined1 *)(param_1 + 0x54));
        if (iVar2 != 0) {
          uVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,
                                      *(undefined1 *)(param_1 + 0x54));
          uVar4 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),1,
                                      *(undefined1 *)(param_1 + 0x54));
          uVar5 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),1,
                                      *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),0,uVar3,
                              *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),0,uVar4,
                              *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),0,uVar5,
                              *(undefined1 *)(param_1 + 0x54));
          uVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,
                                      *(undefined1 *)(param_1 + 0x54));
          uVar4 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),2,
                                      *(undefined1 *)(param_1 + 0x54));
          uVar5 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),2,
                                      *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),1,uVar3,
                              *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),1,uVar4,
                              *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),1,uVar5,
                              *(undefined1 *)(param_1 + 0x54));
          uVar6 = 3;
          uVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,
                                      *(undefined1 *)(param_1 + 0x54));
          uVar4 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),3,
                                      *(undefined1 *)(param_1 + 0x54));
          uVar5 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),3,
                                      *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),2,uVar3,
                              *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),2,uVar4,
                              *(undefined1 *)(param_1 + 0x54));
          FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),2,uVar5,
                              *(undefined1 *)(param_1 + 0x54));
        }
      }
    }
  }
  uVar3 = FUN__text__0063cbb8(param_2,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),uVar6,param_2,*(undefined1 *)(param_1 + 0x54)
                     );
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),uVar6,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),uVar6,uVar3,*(undefined1 *)(param_1 + 0x54));
  return;
}


