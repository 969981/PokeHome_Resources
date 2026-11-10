/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d143c; name: FUN_.text__003d143c
 */


void FUN__text__003d143c(long param_1,undefined8 param_2,long *param_3,int param_4,int param_5,
                        int param_6,undefined8 *param_7)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x620) == '\0') {
    if (*(int *)(param_1 + 8) != 2) {
      lVar4 = param_1 + (ulong)*(byte *)(param_1 + 0x550) * 0x290;
      plVar1 = param_3;
      if (param_3[3] != 0) {
        plVar1 = param_3 + 1;
      }
      if (*plVar1 == *(long *)(lVar4 + 0x38) && *(int *)(lVar4 + 0x280) == param_4)
      goto LAB__text__003d1464;
    }
    if (param_5 == 0) {
      FUN__text__003d15d0(param_1 + (ulong)*(byte *)(param_1 + 0x551) * 0x290 + 0x30,param_2,param_3
                          ,param_4);
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0x598) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x622) = 1;
      FUN__text__00168178(param_1 + 0x628);
      FUN__text__00168178(param_1 + 0x558,param_3);
      *(int *)(param_1 + 0x588) = param_4;
      *(int *)(param_1 + 0x598) = param_6;
      if (param_6 == 1) {
        if (*(long *)(param_1 + 0x590) != 0) {
          lVar4 = FUN__text__006b4514(*(undefined8 *)(param_1 + 0x18));
          *(undefined8 *)(*(long *)(lVar4 + 0x18) + (long)*(int *)(param_1 + 0x20) * 0x10 + 8) =
               *(undefined8 *)(param_1 + 0x590);
        }
      }
      else if (param_6 == 0) {
        *(byte *)(*(long *)(param_1 + 0x18) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x18) + 0x58) & 0xfe;
      }
    }
    *(undefined1 *)(param_1 + 0x550) = *(undefined1 *)(param_1 + 0x551);
    pcVar2 = *(code **)(param_1 + 0x5a8);
  }
  else {
    *(undefined1 *)(param_1 + 0x620) = 0;
LAB__text__003d1464:
    *(undefined4 *)(param_1 + 8) = 1;
    pcVar2 = *(code **)(param_1 + 0x5a8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5b0) = 0;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    (*pcVar2)(param_1 + 0x5c0);
  }
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,param_1 + 0x5c0);
    uVar3 = param_7[3];
    *(undefined8 *)(param_1 + 0x5a8) = param_7[1];
    *(undefined8 *)(param_1 + 0x5b8) = uVar3;
    uVar3 = *param_7;
    *(undefined8 *)(param_1 + 0x5b0) = param_7[2];
    *(undefined8 *)(param_1 + 0x5a0) = uVar3;
  }
  return;
}


