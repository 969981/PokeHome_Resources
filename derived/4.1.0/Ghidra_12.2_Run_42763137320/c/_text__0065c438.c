/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c438; name: FUN_.text__0065c438
 */


void FUN__text__0065c438(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_38;
  int local_34;
  
  if (((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0xd8), lVar2 != 0)) && (param_2 != -1)) {
    local_38 = param_2;
    lVar1 = FUN__text__00654034(lVar2 + 0xb8,&local_38,4);
    if (lVar1 != 0) {
      if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
        (**(code **)(lVar2 + 0x60))
                  (param_1,param_2,4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar1 + 0x28));
      }
      local_34 = param_2;
      FUN__text__00653f90(lVar2 + 0xb8,&local_34,4);
    }
  }
  return;
}


