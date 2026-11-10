/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067014c; name: FUN_.text__0067014c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0067014c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  puVar1 = _DAT_008a3810;
  *(undefined8 *)(param_1 + 0x778) = 0;
  puVar3 = _DAT_008a6590;
  *(undefined8 *)(param_1 + 0x780) = 0;
  puVar2 = _DAT_008a3818;
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  uVar5 = _DAT_008a65c0;
  uVar4 = *puVar1;
  *(undefined1 **)(param_1 + 0x708) = &LAB__text__00670310;
  *(undefined8 *)(param_1 + 0x7d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x720) = uVar5;
  *(undefined8 *)(param_1 + 0x6f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x688) = uVar4;
  uVar5 = *puVar3;
  uVar4 = *puVar2;
  *(undefined8 *)(param_1 + 0x6d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc08) = 0x3c;
  *(undefined8 *)(param_1 + 0xbf8) = 5;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0xc00) = 0;
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 5;
  *(undefined1 *)(param_1 + 0xa90) = 0;
  *(undefined8 *)(param_1 + 0x668) = uVar4;
  *(undefined8 *)(param_1 + 0x690) = uVar5;
  *(undefined4 *)(param_1 + 0xa38) = 1;
  *(undefined4 *)(param_1 + 0xe90) = 1;
  *(undefined4 *)(param_1 + 0xc40) = 1;
  *(undefined8 *)(param_1 + 0x6b0) = 1;
  *(undefined8 *)(param_1 + 0x6b8) = 1;
  *(undefined2 *)(param_1 + 0x6c0) = 1;
  *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffe3fff7ffc | 0xc0008000;
  FUN__text__00656da4(param_1 + 0x820,param_1);
  *(undefined8 *)(param_1 + 0xc78) = 0xffffffffffffffff;
  *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) | 0xb;
  memcpy((void *)(param_1 + 0xb20),(void *)(param_1 + 0xa48),0xd8);
  *(undefined8 *)(param_1 + 0xe78) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc68) = 0x1a4;
  *(undefined8 *)(param_1 + 0xc70) = 0x1ed;
  *(undefined8 *)(param_1 + 0xe80) = 0xfffffffff3fffbef;
  FUN__text__00677948();
  *(undefined8 *)(param_1 + 0xee0) = 1000;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0x4000;
  *(undefined8 *)(param_1 + 0xc18) = 0x10000;
  *(undefined8 *)(param_1 + 0x7c0) = 200;
  *(undefined8 *)(param_1 + 0xea8) = 0;
  *(undefined8 *)(param_1 + 0xed0) = 0x3c;
  *(undefined8 *)(param_1 + 0xf10) = 60000;
  *(undefined8 *)(param_1 + 0xec8) = 0x3c;
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  *(undefined8 *)(param_1 + 0xed8) = 5;
  *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xffff07ffffffffff | 0x400c00800000010
  ;
  *(undefined8 *)(param_1 + 0xa40) = 4;
  FUN__text__006619d0(param_1 + 0x668);
  return 0;
}


