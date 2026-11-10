/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00606694; name: FUN_.text__00606694
 */


void FUN__text__00606694(undefined8 *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x27) = 0x1c;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)(param_3 + 0x42);
  uVar2 = FUN__text__00638558(*(undefined2 *)(param_3 + 0xd),*(undefined2 *)(param_3 + 0x22),
                              *(undefined1 *)(param_3 + 0x42));
  *(undefined4 *)((long)param_1 + 0x1f) = uVar2;
  uVar2 = FUN__text__006385b0(*(undefined2 *)(param_3 + 0xd),*(undefined2 *)(param_3 + 0x22),
                              *(undefined1 *)(param_3 + 0x43),*(undefined1 *)(param_3 + 0x42));
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  uVar1 = FUN__text__005ff43c(*(undefined2 *)(param_3 + 0xd),*(undefined2 *)(param_3 + 0x22),3);
  *(undefined2 *)((long)param_1 + 0x3d) = uVar1;
  *(byte *)((long)param_1 + 0x3f) = *(byte *)((long)param_1 + 0x3f) | 1;
  FUN__text__00629340(param_1,param_3);
  FUN__text__00608478(param_1,param_2,param_3);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x37);
  *(undefined2 *)((long)param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3b);
  return;
}


