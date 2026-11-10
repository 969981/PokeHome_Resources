/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016f36c; name: FUN_.text__0016f36c
 */


void FUN__text__0016f36c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (lVar2 != 0) {
      FUN__text__0016f4b0(lVar2);
      (**(code **)(**(long **)(lVar1 + 0x38) + 0x18))
                (*(long **)(lVar1 + 0x38),lVar2,*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x48));
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(**(long **)(lVar1 + 0x18) + 0x18))
                (*(long **)(lVar1 + 0x18),puVar3,*(undefined8 *)(lVar1 + 0x20),
                 *(undefined8 *)(lVar1 + 0x28));
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48));
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  if (lVar2 != 0) {
    FUN__text__0016f4b0(lVar2);
    (**(code **)(**(long **)(lVar1 + 0x38) + 0x18))
              (*(long **)(lVar1 + 0x38),lVar2,*(undefined8 *)(lVar1 + 0x40),
               *(undefined8 *)(lVar1 + 0x48));
  }
  puVar3 = *(undefined8 **)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(**(long **)(lVar1 + 0x18) + 0x18))
              (*(long **)(lVar1 + 0x18),puVar3,*(undefined8 *)(lVar1 + 0x20),
               *(undefined8 *)(lVar1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0016f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (*(long **)(param_1 + 0x18),lVar1,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}


