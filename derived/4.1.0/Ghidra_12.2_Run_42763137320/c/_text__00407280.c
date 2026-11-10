/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407280; name: FUN_.text__00407280
 */


void FUN__text__00407280(long param_1,undefined8 *param_2,long param_3,int *param_4,
                        undefined8 *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar2 = auStack_a0;
  fVar5 = 1.0 / (float)*(ushort *)((long)param_2 + 0x12);
  memcpy((void *)*param_5,(void *)*param_2,
         (ulong)*(ushort *)((long)param_2 + 0x12) * (ulong)*(byte *)(param_2 + 1) * 4);
  *(undefined2 *)((long)param_5 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  if (*(char *)(param_1 + 0x9c) != '\0') {
    puVar2 = auStack_a0 +
             -(ulong)(((*(uint *)(param_5 + 1) & 0xff) * 4 + 0xc & 0x7f0) *
                     (*(uint *)(param_3 + 8) & 0xff));
    local_98 = 0;
    uStack_90 = 0x3f800000;
    local_78 = 0x3f80000000000000;
    uStack_70 = 0xffff3f800000;
    local_88 = 0x3f800000;
    uStack_80 = 0;
    local_58 = 0x100003f800000;
    local_68 = 0x3f800000;
    uStack_60 = 0;
    FUN__text__00481d28(&local_98,*(uint *)(param_3 + 8),*(uint *)(param_5 + 1),param_1 + 200,puVar2
                       );
    local_98 = 0x3f8000003f800000;
    thunk_FUN__text__00420290
              (fVar5,param_3,param_5,&local_98,puVar2,puVar2,*(undefined2 *)(param_3 + 0x12));
  }
  if (0 < *param_4) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_4 + 2) + lVar3 * 8);
      lVar4 = *(long *)(*(long *)(param_4 + 4) + lVar3 * 8);
      puVar2 = puVar2 + -(ulong)(((*(uint *)(param_5 + 1) & 0xff) * 4 + 0xc & 0x7f0) *
                                (*(uint *)(lVar1 + 8) & 0xff));
      FUN__text__00481d28(lVar4 + 8,*(uint *)(lVar1 + 8),*(uint *)(param_5 + 1),param_1 + 200,puVar2
                         );
      thunk_FUN__text__00420290
                (fVar5,lVar1,param_5,lVar4 + 0x50,puVar2,puVar2,*(undefined2 *)(lVar1 + 0x12));
      lVar3 = lVar3 + 1;
      *(undefined2 *)((long)param_5 + 0x12) = *(undefined2 *)(param_5 + 2);
    } while (lVar3 < *param_4);
  }
  return;
}


