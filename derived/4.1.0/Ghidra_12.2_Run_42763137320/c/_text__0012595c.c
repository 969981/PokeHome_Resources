/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012595c; name: FUN_.text__0012595c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0012595c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = _DAT_0089f6b0;
  puVar2 = *(undefined8 **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(long *)(param_1 + 0x138) = lVar1 + 0x10;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x1a0) + 0x18))
              (*(long **)(param_1 + 0x1a0),puVar2,*(undefined8 *)(param_1 + 0x1a8),
               *(undefined8 *)(param_1 + 0x1b0));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x180) + 0x18))
              (*(long **)(param_1 + 0x180),puVar2,*(undefined8 *)(param_1 + 0x188),
               *(undefined8 *)(param_1 + 400));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))
              (*(long **)(param_1 + 0x160),puVar2,*(undefined8 *)(param_1 + 0x168),
               *(undefined8 *)(param_1 + 0x170));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),puVar2,*(undefined8 *)(param_1 + 0x80),
               *(undefined8 *)(param_1 + 0x88));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),puVar2,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00125ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
            (*(long **)(param_1 + 0x38),puVar2,*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48));
  return;
}


