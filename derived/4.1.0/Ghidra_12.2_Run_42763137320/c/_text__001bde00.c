/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bde00; name: FUN_.text__001bde00
 */


void FUN__text__001bde00(long param_1,long param_2)

{
  long lVar1;
  char local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  
  local_44[0] = '\0';
  local_40 = 0;
  local_38 = 0;
  FUN__text__001912c0(param_2,local_44);
  if ((((*(char *)(param_1 + 0x5a58) == local_44[0]) &&
       (*(int *)(param_1 + 0x5a5c) == (int)local_40)) &&
      (*(int *)(param_1 + 0x5a60) == local_40._4_4_)) &&
     ((*(int *)(param_1 + 0x5a64) == (int)local_38 && (*(int *)(param_1 + 0x5a68) == local_38._4_4_)
      ))) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN__text__003c7c60(lVar1,param_1 + (ulong)*(uint *)(param_2 + 0xc) * 1000 +
                              (ulong)*(uint *)(param_2 + 0x10) * 200 + 0x1478,1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


