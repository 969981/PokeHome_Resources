/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005beb80; name: FUN_.text__005beb80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005beb80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_30;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x680) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x6a8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x698) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0x2d0050000000001;
  *(undefined4 *)(param_1 + 0x6f8) = 0x3f800000;
  local_28 = (undefined1 *)((ulong)local_28 & 0xffffffff00000000);
  local_30 = 0;
  FUN__text__005bdfd0(param_1,&local_28,&local_30);
  local_30 = 0;
  local_28._0_4_ = 1;
  FUN__text__005bdfd0(param_1,&local_28,&local_30);
  local_30 = 0;
  local_28 = (undefined1 *)CONCAT44(local_28._4_4_,2);
  FUN__text__005bdfd0(param_1,&local_28,&local_30);
  local_30 = 0;
  local_28 = (undefined1 *)&local_30;
  lVar1 = FUN__text__005c1080(param_1 + 0x730,&local_30,_DAT_008a01d8,&local_28,&uStack_29);
  lVar1 = *(long *)(lVar1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x630);
  *(long *)(param_1 + 0x630) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  return;
}


