/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320970; name: FUN_.text__00320970
 */


undefined8 FUN__text__00320970(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = DAT_008eef78._1_1_;
  if (DAT_008ef050 - 3U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x003209b4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__003209c0 +
                      (ulong)*(byte *)((ulong)(DAT_008ef050 - 3U) + 0x734be3) * 4))();
    return uVar1;
  }
  lVar2 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar1 = FUN__text__0035d260(lVar2,param_2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return uVar1;
}


