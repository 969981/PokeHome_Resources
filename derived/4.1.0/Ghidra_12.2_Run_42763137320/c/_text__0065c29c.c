/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c29c; name: FUN_.text__0065c29c
 */


undefined8 FUN__text__0065c29c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 == 0xbab1e) {
    if ((char)param_1[0x3c] == '\0') {
      *param_1 = 0;
      plVar1 = (long *)param_1[1];
      while (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        if (((*(ushort *)((long)plVar1 + 0x15a4) >> 0xb & 1) == 0) && (plVar1[2] != 0)) {
          FUN__text__0065a554(plVar1,0,1);
        }
        if (*(int *)(plVar1 + 0x1a) == 2) {
          FUN__text__00654c3c(plVar1,plVar1[0x19]);
          plVar1[0x19] = 0;
          *(undefined4 *)(plVar1 + 0x1a) = 0;
        }
        plVar1[0x220] = 0;
        plVar1[0x1b] = 0;
        plVar1 = (long *)lVar3;
      }
      FUN__text__006516a8(param_1 + 0x1f);
      FUN__text__006540c0(param_1 + 0x17);
      FUN__text__00650ee0(param_1 + 0x1f);
      FUN__text__00656c1c(param_1 + 4,0);
      FUN__text__00656c1c(param_1 + 8,0);
      FUN__text__006540c0(param_1 + 0x10);
      FUN__text__00665ab0(0,param_1 + 0x30);
      FUN__text__00665c38(0,param_1 + 0x34);
      FUN__text__006783e4(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


