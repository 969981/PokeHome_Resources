/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165dec; name: FUN_.text__00165dec
 */


void FUN__text__00165dec(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_72 [66];
  
  FUN__text__005f3c10(auStack_72,0x21,param_3,0x21);
  FUN__text__005f32c4(*(undefined8 *)(param_1 + 400),auStack_72);
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    uVar1 = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = 0;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar1);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar2 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar2 + 0x12) = *(ushort *)(lVar2 + 0x12) & 0xfffe;
  }
  return;
}


