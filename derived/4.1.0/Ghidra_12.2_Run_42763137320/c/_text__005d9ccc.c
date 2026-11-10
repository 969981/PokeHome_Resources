/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9ccc; name: FUN_.text__005d9ccc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d9ccc(long param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long local_68 [6];
  ulong local_38;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    DAT_00b11240 = *(undefined8 *)(param_1 + 8);
    nn::fs::SetAllocator(_DAT_008a5a10,_DAT_008a5a18);
  }
  nn::fs::QueryMountRomCacheSize(&local_38);
  uVar1 = local_38;
  plVar4 = *(long **)(param_1 + 8);
  pvVar2 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,local_38,8);
  lVar3 = *(long *)(param_1 + 0x50);
  *(void **)(param_1 + 0x50) = pvVar2;
  if (lVar3 != 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),lVar3,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
    pvVar2 = *(void **)(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x68) = 8;
  *(long **)(param_1 + 0x58) = plVar4;
  *(ulong *)(param_1 + 0x60) = uVar1;
  nn::fs::MountRom((char *)0x757d35,pvVar2,local_38);
  FUN__text__005d9ea8(local_68,*(undefined8 *)(param_1 + 8),param_2);
  if (*(long *)(param_1 + 0x128) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x128) = local_68[0];
  FUN__text__005e896c(local_68[0],0x71e9e7,2,0x10);
  FUN__text__005d9ea8(local_68,*(undefined8 *)(param_1 + 8),param_2);
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x130) = local_68[0];
  FUN__text__005e896c(local_68[0],0x70fc52,1,0x10);
  FUN__text__0015b248(local_68,0x7148fe);
  FUN__text__00168178(_DAT_0089f558,local_68);
  if ((local_68[3] != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_68[2] = 0x70f683;
  local_68[3] = 0;
  if (local_68[4] != 0) {
    (**(code **)(*(long *)(local_68[4] + 0x48) + 0x18))();
  }
  FUN__text__005d9fd0(param_1);
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x138) = 1;
  return;
}


