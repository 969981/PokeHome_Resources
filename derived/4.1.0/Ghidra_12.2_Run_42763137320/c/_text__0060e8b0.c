/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e8b0; name: FUN_.text__0060e8b0
 */


void FUN__text__0060e8b0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                        uint param_5)

{
  ushort uVar1;
  uint __c;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar3 = (undefined1 *)(lVar2 + 0xd8);
  if ((ulong)*(ushort *)(lVar2 + 0xd6) != 0) {
    do {
      puVar3 = puVar3 + (ulong)*(ushort *)(puVar3 + 1) + 3;
    } while ((ulong)((long)puVar3 - (lVar2 + 0x10)) < (ulong)*(ushort *)(lVar2 + 0xd6) + 200);
  }
  memset(puVar3 + 3,0,(ulong)param_5);
  *puVar3 = param_4;
  *(short *)(puVar3 + 1) = (short)param_5;
  *(short *)(*(long *)(param_1 + 8) + 0xd6) =
       (short)param_5 + *(short *)(*(long *)(param_1 + 8) + 0xd6) + 3;
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0xd6);
  lVar2 = (ulong)uVar1 + 200;
  __c = 0x10 - (uVar1 + 8 & 0xf);
  *(short *)(*(long *)(param_1 + 8) + 0xe) = (short)__c + (short)lVar2;
  memset((void *)(*(long *)(param_1 + 8) + lVar2 + 0x10),__c,(ulong)__c);
  *param_2 = puVar3;
  *param_3 = puVar3 + 3;
  return;
}


