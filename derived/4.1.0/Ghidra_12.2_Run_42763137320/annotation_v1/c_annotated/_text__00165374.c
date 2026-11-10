/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00065374
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165374; name: FUN_.text__00165374
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00165374(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__001682b4(*_DAT_0089f530,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__005f29c0(lVar1,param_4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00113bb0(&local_28,*_DAT_0089f550,0,param_3,0,*(undefined8 *)(param_1 + 0x228),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x68) = local_28;
  plVar3 = (long *)(local_28 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x70) != 0 || *(long *)(param_1 + 0xf0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005d9010(lVar1,param_1 + 0x60,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005d8de0(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_48 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001594b4(&local_28,*(undefined8 *)(param_1 + 0x228),&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__005f29c0(local_28,param_4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (local_28 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar2 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


