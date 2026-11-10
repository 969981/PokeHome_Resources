/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e9c0; name: FUN_.text__0060e9c0
 */


void FUN__text__0060e9c0(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  uint __c;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_308 [8];
  undefined8 *local_300;
  undefined1 auStack_2f6 [662];
  
  memset(auStack_2f6,0,0x296);
  FUN__text__0060e784(auStack_308,auStack_2f6);
  puVar9 = local_300;
  *(undefined8 *)((long)local_300 + 10) = 0;
  *(undefined8 *)((long)local_300 + 2) = 0;
  *(undefined2 *)local_300 = 4;
  *(undefined8 *)((long)local_300 + 0x12) = 0;
  *(undefined8 *)((long)local_300 + 0x1a) = 0;
  *(undefined8 *)((long)local_300 + 0x22) = 0;
  *(undefined8 *)((long)local_300 + 0x2a) = 0;
  *(undefined8 *)((long)local_300 + 0x32) = 0;
  *(undefined8 *)((long)local_300 + 0x3a) = 0;
  *(undefined8 *)((long)local_300 + 0x42) = 0;
  *(undefined8 *)((long)local_300 + 0x4a) = 0;
  *(undefined8 *)((long)local_300 + 0x52) = 0;
  *(undefined8 *)((long)local_300 + 0x5a) = 0;
  *(undefined8 *)((long)local_300 + 0x62) = 0;
  *(undefined8 *)((long)local_300 + 0x6a) = 0;
  *(undefined8 *)((long)local_300 + 0x72) = 0;
  *(undefined8 *)((long)local_300 + 0x7a) = 0;
  *(undefined8 *)((long)local_300 + 0x82) = 0;
  *(undefined8 *)((long)local_300 + 0x8a) = 0;
  *(undefined8 *)((long)local_300 + 0x92) = 0;
  *(undefined8 *)((long)local_300 + 0x9a) = 0;
  *(undefined8 *)((long)local_300 + 0xa2) = 0;
  *(undefined8 *)((long)local_300 + 0xaa) = 0;
  *(undefined8 *)((long)local_300 + 0xb2) = 0;
  *(undefined8 *)((long)local_300 + 0xba) = 0;
  *(undefined8 *)((long)local_300 + 0xc2) = 0;
  *(undefined8 *)((long)local_300 + 0xca) = 0;
  local_300[0x1a] = 0;
  *(undefined8 *)((long)local_300 + 2) = 0;
  *(undefined4 *)((long)local_300 + 10) = 0;
  *(undefined4 *)((long)local_300 + 0xe) = 0xc400d0;
  *(undefined2 *)((long)local_300 + 0xd6) = 0;
  local_300[0x1b] = 0x808080808080808;
  uVar3 = (*(undefined8 **)(param_1 + 8))[1];
  *local_300 = **(undefined8 **)(param_1 + 8);
  local_300[1] = uVar3;
  *(undefined2 *)(local_300 + 2) = *(undefined2 *)(*(long *)(param_1 + 8) + 0x10);
  memcpy((undefined2 *)((long)local_300 + 0x12),(void *)(*(long *)(param_1 + 8) + 0x12),0xc4);
  *(undefined2 *)((long)puVar9 + 0xd6) = 0;
  lVar7 = *(long *)(param_1 + 8);
  if (*(short *)(lVar7 + 0xd6) == 0) {
    uVar8 = 0;
  }
  else {
    pcVar10 = (char *)(lVar7 + 0xd8);
    do {
      cVar4 = *pcVar10;
      if (cVar4 != param_2) {
        pcVar11 = (char *)(local_300 + 0x1b);
        if ((ulong)*(ushort *)((long)local_300 + 0xd6) != 0) {
          do {
            pcVar11 = pcVar11 + (ulong)*(ushort *)(pcVar11 + 1) + 3;
          } while ((ulong)((long)pcVar11 - (long)(local_300 + 2)) <
                   (ulong)*(ushort *)((long)local_300 + 0xd6) + 200);
        }
        uVar5 = *(ushort *)(pcVar10 + 1);
        memset(pcVar11 + 3,0,(ulong)uVar5);
        *pcVar11 = cVar4;
        *(ushort *)(pcVar11 + 1) = uVar5;
        iVar2 = (uint)uVar5 + (uint)*(ushort *)((long)local_300 + 0xd6);
        uVar1 = iVar2 + 3;
        sVar6 = (short)uVar1;
        *(short *)((long)local_300 + 0xd6) = sVar6;
        __c = 0x10 - (iVar2 + 0xbU & 0xf);
        *(short *)((long)local_300 + 0xe) = (short)__c + sVar6 + 200;
        memset((void *)((long)local_300 + ((ulong)uVar1 & 0xffff) + 0xd8),__c,(ulong)__c);
        cVar4 = pcVar10[2];
        *(undefined2 *)pcVar11 = *(undefined2 *)pcVar10;
        pcVar11[2] = cVar4;
        memcpy(pcVar11 + 3,pcVar10 + 3,(ulong)uVar5);
        lVar7 = *(long *)(param_1 + 8);
      }
      pcVar10 = pcVar10 + (ulong)*(ushort *)(pcVar10 + 1) + 3;
    } while (pcVar10 + (-0x10 - lVar7) < (char *)((ulong)*(ushort *)(lVar7 + 0xd6) + 200));
    uVar8 = (ulong)*(ushort *)((long)local_300 + 0xd6);
    puVar9 = local_300;
  }
  uVar1 = 0x10 - ((int)uVar8 + 8U & 0xf);
  *(short *)((long)puVar9 + 0xe) = (short)uVar1 + (short)uVar8 + 200;
  memset((void *)((long)local_300 + uVar8 + 0xd8),uVar1,(ulong)uVar1);
  if ((*(void **)(param_1 + 8) != (void *)0x0) && (local_300 != (undefined8 *)0x0)) {
    memcpy(*(void **)(param_1 + 8),local_300,(ulong)*(ushort *)((long)local_300 + 0xe) + 0x10);
  }
  FUN__text__0060e79c(auStack_308);
  return;
}


