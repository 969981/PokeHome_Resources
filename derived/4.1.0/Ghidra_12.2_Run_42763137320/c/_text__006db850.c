/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006db850; name: FUN_.text__006db850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006db850(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if ((*(char *)(*(long *)(*param_1 + 0xa0) + 0x752) != '\0') ||
     (lVar2 = *(long *)(*param_1 + 0x418), lVar2 == 0)) {
    return;
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  if (lVar3 != 0) {
    lVar4 = *param_1;
    lVar5 = *_DAT_008a6bb0;
    do {
      uVar1 = *(undefined8 *)(lVar3 + 0x50);
      fVar6 = *(float *)(*(long *)(*(long *)(lVar4 + 0x238) + 0x338) + 0x14);
      *(int *)(lVar4 + 0x838) = *(int *)(lVar4 + 0x838) + -1;
      *(ulong *)(lVar4 + 0x830) =
           *(long *)(lVar4 + 0x830) - ((ulong)(uint)(int)fVar6 * 0x40 + 0xff & 0x7fffffff00);
      FUN__text__006d84e0(uVar1,1);
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined1 *)(lVar3 + 0x84) = 0;
      *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + -1;
      lVar3 = *(long *)(lVar3 + 0x68);
    } while (lVar3 != 0);
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  (**(code **)(*(long *)(*param_1 + 0x828) + 0x18))(*param_1 + 0x828,lVar2);
  *(undefined8 *)(*param_1 + 0x418) = 0;
  return;
}


