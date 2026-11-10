/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194154; name: FUN_.text__00194154
 */


bool FUN__text__00194154(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = false;
  if (*param_2 != 0) {
    uVar2 = FUN__text__00306588();
    if (((uVar2 & 1) == 0) &&
       (uVar2 = FUN__text__003069e8(*param_2,(ulong)param_4), (uVar2 & 1) != 0)) {
      bVar1 = *(char *)(param_3 + ((ulong)param_4 & 0xff)) != '\0';
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


