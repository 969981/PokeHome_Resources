/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633624; name: FUN_.text__00633624
 */


void FUN__text__00633624(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (((param_2 & 0xff) == (param_3 & 0xff)) || (3 < ((param_3 | param_2) & 0xff))) {
    return;
  }
  uVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),param_2,
                              *(undefined1 *)(param_1 + 0x54));
  uVar2 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),param_2,
                              *(undefined1 *)(param_1 + 0x54));
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),param_2,
                              *(undefined1 *)(param_1 + 0x54));
  uVar5 = *(undefined8 *)(param_1 + 0x2f0);
  uVar4 = FUN__text__006120d0(uVar5,param_3,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061d7c0(uVar5,param_2,uVar4,*(undefined1 *)(param_1 + 0x54));
  uVar5 = *(undefined8 *)(param_1 + 0x2f0);
  uVar4 = FUN__text__006125e0(uVar5,param_3,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(uVar5,param_2,uVar4,*(undefined1 *)(param_1 + 0x54));
  uVar5 = *(undefined8 *)(param_1 + 0x2f0);
  uVar4 = FUN__text__00612a70(uVar5,param_3,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061e170(uVar5,param_2,uVar4,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),param_3,uVar1,*(undefined1 *)(param_1 + 0x54)
                     );
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),param_3,uVar3,*(undefined1 *)(param_1 + 0x54)
                     );
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),param_3,uVar2,*(undefined1 *)(param_1 + 0x54)
                     );
  return;
}


