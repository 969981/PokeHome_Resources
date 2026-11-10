/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165d24; name: FUN_.text__00165d24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00165d24(long param_1,uint param_2,undefined8 param_3,ulong param_4,
                        undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN__text__0016ad94(param_5,0);
  uVar2 = FUN__text__0016ae08(*_DAT_0089f560);
  FUN__text__00156ff8(*(undefined8 *)(param_1 + 0x198),param_3,uVar1,uVar2);
  uVar3 = FUN__text__00157128(*(undefined8 *)(param_1 + 0x198));
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = param_4 & 3;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar3);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  }
  return;
}


