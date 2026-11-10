/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f15dc; name: FUN_.text__004f15dc
 */


void FUN__text__004f15dc(undefined4 param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 *param_7
                        ,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN__text__0047390c(param_2,param_3,param_5,param_6,param_8,param_9);
  FUN__text__004ec468(param_2 + 0x71,param_4);
  *param_2 = 0x88fbd0;
  param_2[2] = 0x88fd10;
  param_2[3] = 0x88fd28;
  param_2[0x10] = 0x88fdf8;
  param_2[0x71] = 0x88fe40;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar4 = param_7[2];
  uVar3 = *(undefined4 *)(param_7 + 3);
  *(undefined8 *)((long)param_2 + 0x3bc) = 0;
  *(undefined4 *)((long)param_2 + 700) = param_1;
  *(undefined4 *)(param_2 + 0x77) = uVar3;
  param_2[0x76] = uVar4;
  param_2[0x75] = uVar2;
  param_2[0x74] = uVar1;
  *(byte *)((long)param_2 + 0x3c4) = *(byte *)((long)param_2 + 0x3c4) & 0xfe;
  *(uint *)((long)param_2 + 0x313) = *(uint *)((long)param_2 + 0x313) & 0x8fdfffff | 0x10000000;
  return;
}


