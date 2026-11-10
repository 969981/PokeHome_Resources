/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002061e0; name: FUN_.text__002061e0
 */


/* WARNING: Removing unreachable block (ram,0x00206698) */

undefined8 FUN__text__002061e0(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 % 6;
  uVar1 = *(uint *)((ulong)*(uint *)((ulong)param_1 * 0x18 + 0x727228) * 4 + 0x727210);
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0020622c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00206238 + (ulong)*(byte *)((ulong)uVar1 + 0x7271ec) * 4))();
    return uVar2;
  }
  uVar1 = *(uint *)((ulong)*(uint *)((ulong)param_1 * 0x18 + 0x72722c) * 4 + 0x727210);
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00206300 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__0020630c + (ulong)*(byte *)((ulong)uVar1 + 0x7271f2) * 4))();
    return uVar2;
  }
  uVar1 = *(uint *)((ulong)*(uint *)((ulong)param_1 * 0x18 + 0x727230) * 4 + 0x727210);
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x002063f0 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__002063fc + (ulong)*(byte *)((ulong)uVar1 + 0x7271f8) * 4))();
    return uVar2;
  }
  uVar1 = *(uint *)((ulong)*(uint *)((ulong)param_1 * 0x18 + 0x727234) * 4 + 0x727210);
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00206478 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00206484 + (ulong)*(byte *)((ulong)uVar1 + 0x7271fe) * 4))();
    return uVar2;
  }
  uVar1 = *(uint *)((ulong)*(uint *)((ulong)param_1 * 0x18 + 0x727238) * 4 + 0x727210);
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0020654c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00206558 + (ulong)*(byte *)((ulong)uVar1 + 0x727204) * 4))();
    return uVar2;
  }
  uVar1 = *(uint *)((ulong)*(uint *)((ulong)param_1 * 0x18 + 0x72723c) * 4 + 0x727210);
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0020663c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00206648 + (ulong)*(byte *)((ulong)uVar1 + 0x72720a) * 4))();
    return uVar2;
  }
  return 0;
}


