/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005493c0; name: FUN_.text__005493c0
 */


undefined8 FUN__text__005493c0(long *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  void *__s;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar5 = (ulong)*(uint *)(param_1 + 2);
    if (*(uint *)(param_1 + 2) != 0) {
      uVar6 = 0;
      do {
        if (*(long *)(*param_1 + uVar6 * 8) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
          uVar5 = (ulong)*(uint *)(param_1 + 2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      lVar4 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar4);
  }
  uVar1 = param_4 & 0xff;
  uVar5 = (ulong)uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 7) = uVar1;
  cVar2 = *(char *)(param_3 + 0x14);
  *(char *)((long)param_1 + 0x44) = cVar2;
  if (((param_4 >> 0xf & 1) != 0) && (cVar2 == '\0')) {
    uVar5 = (ulong)(uVar1 - 1);
    *(uint *)(param_1 + 7) = uVar1 - 1;
  }
  if ((int)uVar5 == 0) {
    uVar3 = 2;
  }
  else {
    fVar7 = *(float *)(param_3 + 0x10);
    uVar1 = *(uint *)((long)param_1 + 0x3c);
    __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 << 3,0x71ae39,0x3f);
    *param_1 = (long)__s;
    if (__s == (void *)0x0) {
      uVar3 = 0x34;
    }
    else {
      memset(__s,0,uVar5 << 3 & 0xfffffff8);
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(int *)(param_1 + 2) = (int)uVar5;
      uVar1 = (int)(fVar7 * (float)uVar1) + 3U & 0xfffffffc;
      *(uint *)(param_1 + 1) = uVar1;
      if (uVar1 != 0) {
        uVar5 = 0;
        do {
          uVar3 = (**(code **)(*param_2 + 0x10))
                            (param_2,(ulong)*(uint *)(param_1 + 1) << 2,0x71ae39,0x54);
          *(undefined8 *)(*param_1 + uVar5 * 8) = uVar3;
          if (*(long *)(*param_1 + uVar5 * 8) == 0) {
            return 0x34;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 2));
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


