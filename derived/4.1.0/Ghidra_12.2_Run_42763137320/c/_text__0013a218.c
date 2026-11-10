/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a218; name: FUN_.text__0013a218
 */


void FUN__text__0013a218(long param_1,uint param_2,ulong param_3,undefined8 param_4,
                        undefined4 param_5)

{
  undefined8 local_18;
  
  if ((param_2 < 8) && ((1 << (ulong)(param_2 & 0x1f) & 0xa1U) != 0)) {
    if (param_2 < 8) {
      local_18 = *(undefined8 *)
                  (*(long *)((long)(int)param_2 * 8 + 0x869c08) + (param_3 & 0xffffffff) * 8);
    }
    else {
      local_18 = 0xcbf29ce484222645;
    }
    FUN__text__0012c9f0(param_1 + 0x110,&local_18,param_4,param_5);
  }
  return;
}


