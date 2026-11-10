/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004324b0; name: FUN_.text__004324b0
 */


int FUN__text__004324b0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4
                       ,undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined8 param_10,undefined4 param_11,long *param_12)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  puVar2 = (undefined4 *)FUN__text__00432620(param_1,param_8,param_7);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = 0x34;
  }
  else {
    *puVar2 = param_4;
    puVar2[1] = param_8;
    *(undefined1 *)((long)puVar2 + 0xd) = param_5;
    *(undefined1 *)(puVar2 + 3) = param_6;
    puVar2[2] = param_7;
    puVar2[4] = param_2;
    iVar1 = FUN__text__00432788(puVar2,param_10,param_11,param_9);
    if (iVar1 == 1) {
      if (param_12 == (long *)0x0) {
        iVar1 = 1;
      }
      else {
        *param_12 = (long)puVar2;
        iVar1 = 1;
      }
    }
    else {
      plVar4 = (long *)*param_1;
      uVar5 = *(uint *)(param_1 + 1);
      plVar3 = plVar4;
      if (uVar5 == 0) {
LAB__text__0043258c:
        if (plVar3 != plVar4 + uVar5) {
          lVar6 = *plVar3;
          uVar5 = uVar5 - 1;
          if (plVar3 < plVar4 + uVar5) {
            memmove(plVar3,plVar3 + 1,
                    (ulong)(uint)((int)(plVar4 + uVar5) - (int)plVar3) & 0xfffffff8);
            uVar5 = *(int *)(param_1 + 1) - 1;
          }
          *(uint *)(param_1 + 1) = uVar5;
          if (lVar6 != 0) {
            if (*(long *)(lVar6 + 0x18) != 0) {
              FUN__text__00400fc0(0);
            }
            *(long *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined4 *)(lVar6 + 0x28) = 1;
            FUN__text__00400fc0(2,lVar6);
          }
        }
      }
      else {
        lVar6 = (ulong)uVar5 << 3;
        do {
          if (*(int *)(*plVar3 + 4) == puVar2[1]) goto LAB__text__0043258c;
          plVar3 = plVar3 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
  }
  return iVar1;
}


