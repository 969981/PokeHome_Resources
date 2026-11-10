/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00687280; name: FUN_.text__00687280
 */


undefined8 FUN__text__00687280(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  
  Libz_SigloMiddlewareInfo();
  if ((((((param_1 != (long *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
       ((plVar3 = (long *)param_1[7], plVar3 != (long *)0x0 && ((long *)*plVar3 == param_1)))) &&
      ((iVar2 = (int)plVar3[1], iVar2 - 0x3f34U < 0x20 && (param_1[3] != 0)))) &&
     ((*param_1 != 0 || ((int)param_1[1] == 0)))) {
    if (iVar2 == 0x3f3f) {
      iVar2 = 0x3f40;
      *(undefined4 *)(plVar3 + 1) = 0x3f40;
    }
    if (iVar2 - 0x3f34U < 0x1f) {
                    /* WARNING: Could not emulate address calculation at 0x00687380 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__00687394 +
                        (ulong)*(ushort *)((ulong)(iVar2 - 0x3f34U) * 2 + 0x7652e8) * 4))
                        (0xfffffffd);
      return uVar1;
    }
  }
  return 0xfffffffe;
}


