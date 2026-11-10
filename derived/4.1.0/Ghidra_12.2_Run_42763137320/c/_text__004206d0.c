/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004206d0; name: FUN_.text__004206d0
 */


void FUN__text__004206d0(undefined8 param_1,long *param_2,ulong param_3,undefined8 *param_4,
                        undefined8 param_5,long param_6,undefined4 param_7)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_30 [4];
  
  local_30[2] = *param_4;
  lVar2 = (long)local_30 - ((ulong)(((uint)param_3 & 0xff) * 8 + 0xf) & 0xff0);
  local_30[0] = param_6;
  local_30[1] = param_5;
  local_30[3] = param_1;
  if ((param_3 & 0xff) != 0) {
    lVar4 = *param_2;
    uVar3 = (ulong)*(ushort *)(param_2 + 2);
    if ((param_3 & 0xff) == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = lVar4;
      do {
        plVar1 = (long *)(lVar2 + lVar5 * 8);
        lVar5 = lVar5 + 2;
        *plVar1 = lVar6;
        plVar1[1] = lVar6 + uVar3 * 4;
        lVar6 = lVar6 + uVar3 * 8;
      } while ((param_3 & 0xff) - (param_3 & 1) != lVar5);
    }
    if ((param_3 & 1) != 0) {
      *(ulong *)(lVar2 + lVar5 * 8) = lVar4 + lVar5 * uVar3 * 4;
    }
  }
  FUN__text__00420400(local_30 + 3,lVar2,local_30 + 2,local_30 + 1,local_30,param_7,1);
  return;
}


