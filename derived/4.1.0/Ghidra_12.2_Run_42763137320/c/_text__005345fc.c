/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005345fc; name: FUN_.text__005345fc
 */


void FUN__text__005345fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x38);
  uVar1 = FUN__text__0050c2a0(param_2,*(undefined8 *)(lVar4 + 0x68));
  if (*(long *)(lVar4 + 0x58) != -1) {
    FUN__text__0050c2a0(param_2,*(undefined8 *)(lVar4 + 0x80));
  }
  uVar2 = FUN__text__0050c2e0(param_2,**(undefined8 **)(param_1 + 0x30));
  uVar3 = FUN__text__005334f0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),uVar1,
                              *(undefined8 *)(param_1 + 0x30),uVar2);
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN__text__00509350(uVar1);
    if (((uVar3 & 1) != 0) || (uVar3 = FUN__text__00509374(uVar1), (uVar3 & 1) != 0))
    goto LAB__text__005346a0;
  }
  *(undefined1 *)(param_1 + 0x28) = 4;
  FUN__text__00529fa0(param_1);
LAB__text__005346a0:
  FUN__text__0052c540(*(long *)(param_1 + 0x30) + 8,0,uVar2);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 8);
  *(byte *)(lVar4 + 0x7c) = *(byte *)(lVar4 + 0x7c) | 1;
  return;
}


