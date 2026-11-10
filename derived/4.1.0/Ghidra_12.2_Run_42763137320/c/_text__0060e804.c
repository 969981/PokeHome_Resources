/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e804; name: FUN_.text__0060e804
 */


void FUN__text__0060e804(long param_1)

{
  long lVar1;
  ushort uVar2;
  uint __c;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  *puVar3 = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  **(undefined2 **)(param_1 + 8) = 4;
  *(undefined8 *)(*(long *)(param_1 + 8) + 2) = 0;
  *(undefined4 *)(*(long *)(param_1 + 8) + 10) = 0;
  *(undefined2 *)(*(long *)(param_1 + 8) + 0x10) = 0xc4;
  *(undefined2 *)(*(long *)(param_1 + 8) + 0xd6) = 0;
  uVar2 = *(ushort *)(*(long *)(param_1 + 8) + 0xd6);
  lVar1 = (ulong)uVar2 + 200;
  __c = 0x10 - (uVar2 + 8 & 0xf);
  *(short *)(*(long *)(param_1 + 8) + 0xe) = (short)__c + (short)lVar1;
  memset((void *)(*(long *)(param_1 + 8) + lVar1 + 0x10),__c,(ulong)__c);
  return;
}


