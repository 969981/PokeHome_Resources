/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632ba0; name: FUN_.text__00632ba0
 */


void FUN__text__00632ba0(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = param_2 & 0xffffffff;
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),param_2,
                              *(undefined1 *)(param_1 + 0x54));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar4 = FUN__text__0063cbb8(uVar2,uVar3,*(undefined1 *)(param_1 + 0x54));
  uVar5 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar5 = (uVar5 & 0xff) + (param_3 & 0xff);
  if ((uVar4 & 0xff) <= uVar5) {
    uVar5 = uVar4 & 0xff;
  }
  uVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54)
                             );
  uVar6 = FUN__text__0063cbb8(uVar2,uVar3,*(undefined1 *)(param_1 + 0x54));
  uVar4 = uVar6 & 0xff;
  if (uVar5 <= (uVar6 & 0xff)) {
    uVar4 = uVar5;
  }
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),uVar7,uVar4,*(undefined1 *)(param_1 + 0x54));
  return;
}


