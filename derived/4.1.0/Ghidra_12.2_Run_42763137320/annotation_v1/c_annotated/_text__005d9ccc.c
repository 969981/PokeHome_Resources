/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D9CCC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9ccc; name: FUN_.text__005d9ccc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d9ccc(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68 [6]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_2 + 0x10) == '\0') { // [自动静态注释] 条件判断/分支
    DAT_00b11240 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::fs::SetAllocator(_DAT_008a5a10,_DAT_008a5a18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::fs::QueryMountRomCacheSize(&local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar2 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,local_38,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(void **)(param_1 + 0x50) = pvVar2;
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x58),lVar3,*(undefined8 *)(param_1 + 0x60), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x68));
    pvVar2 = *(void **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x68) = 8;
  *(long **)(param_1 + 0x58) = plVar4;
  *(ulong *)(param_1 + 0x60) = uVar1;
  nn::fs::MountRom((char *)0x757d35,pvVar2,local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005d9ea8(local_68,*(undefined8 *)(param_1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x128) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x128) = local_68[0];
  FUN__text__005e896c(local_68[0],0x71e9e7,2,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005d9ea8(local_68,*(undefined8 *)(param_1 + 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x130) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x130) = local_68[0];
  FUN__text__005e896c(local_68[0],0x70fc52,1,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0015b248(local_68,0x7148fe); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00168178(_DAT_0089f558,local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((local_68[3] != 0) && (local_68[0] != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_68[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68[1] = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68[2] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_68[4] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68[4] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005d9fd0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x138) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


