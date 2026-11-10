/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019683c; name: FUN_.text__0019683c
 */


void FUN__text__0019683c(void *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)((long)param_1 + 0x30);
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    FUN__text__0016f4b0(lVar1);
    (**(code **)(**(long **)((long)param_1 + 0x38) + 0x18))
              (*(long **)((long)param_1 + 0x38),lVar1,*(undefined8 *)((long)param_1 + 0x40),
               *(undefined8 *)((long)param_1 + 0x48));
  }
  puVar2 = *(undefined8 **)((long)param_1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)((long)param_1 + 0x18) + 0x18))
              (*(long **)((long)param_1 + 0x18),puVar2,*(undefined8 *)((long)param_1 + 0x20),
               *(undefined8 *)((long)param_1 + 0x28));
  }
  operator_delete(param_1);
  return;
}


