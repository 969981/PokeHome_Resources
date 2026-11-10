/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4b70; name: FUN_.text__003f4b70
 */


undefined8
FUN__text__003f4b70(long *param_1,ulong param_2,undefined4 param_3,uint *param_4,uint param_5,
                   undefined8 param_6)

{
  char *__format;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char acStack_164 [16];
  undefined1 auStack_154 [260];
  
  if ((param_4 != (uint *)0x0) && (*param_4 < 2)) {
    __format = (char *)0x70effa;
    if (param_4[1] != 0) {
      __format = (char *)0x70fb70;
    }
    snprintf(acStack_164,0xf,__format,param_2 & 0xffffffff);
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      iVar1 = FUN__text__003f48a8(param_1,acStack_164,param_4,param_3,auStack_154,0);
      if ((iVar1 == 1) &&
         (uVar2 = FUN__text__003f4a50(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
        return uVar2;
      }
    }
    else {
      do {
        iVar1 = FUN__text__003f48a8(param_1,acStack_164,param_4,param_3,auStack_154,plVar3 + 1);
        if ((iVar1 == 1) &&
           (uVar2 = FUN__text__003f4a50(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1))
        {
          return uVar2;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return 2;
}


