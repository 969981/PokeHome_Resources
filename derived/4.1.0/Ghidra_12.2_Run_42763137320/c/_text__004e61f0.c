/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e61f0; name: FUN_.text__004e61f0
 */


void FUN__text__004e61f0(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined2 local_80 [2];
  char local_7c;
  uint local_74;
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + 0x108;
  FUN__text__004e6e9c(lVar1,auStack_70);
  thunk_FUN__text__004e6884(lVar1);
  if (param_4 != 0) {
    uVar6 = 0;
    do {
      local_80[0] = 0xff00;
      uVar3 = FUN__text__004e7080(lVar1,local_80,&local_74);
      if (((uVar3 & 1) == 0) || (param_4 < local_74)) break;
      if ((char)local_80[0] == -0x50) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
          do {
            while (((puVar5 = puVar4, *(char *)(puVar5 + 1) != -0x50 || ((char)local_80[0] != -0x50)
                    ) || (*(char *)((long)puVar5 + 0xc) != local_7c))) {
              puVar4 = (undefined8 *)puVar5[4];
              puVar7 = puVar5;
              if ((undefined8 *)puVar5[4] == (undefined8 *)0x0) goto LAB__text__004e6254;
            }
            puVar4 = (undefined8 *)puVar5[4];
            puVar2 = param_2 + 1;
            if ((undefined8 *)param_2[1] != puVar5) {
              puVar2 = puVar7 + 4;
            }
            *puVar2 = puVar4;
            if ((undefined8 *)*param_2 == puVar5) {
              *param_2 = puVar7;
            }
            FUN__text__00447104(*puVar5);
            FUN__text__00400fc0(0,puVar5);
          } while (puVar4 != (undefined8 *)0x0);
        }
LAB__text__004e6254:
        FUN__text__00446f40(param_1,param_2,local_80,param_3,local_74,0,0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
  }
  FUN__text__004e6ec0(lVar1,auStack_70);
  return;
}


