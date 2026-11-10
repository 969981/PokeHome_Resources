/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00471800
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00571800; name: FUN_.text__00571800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00571800(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + 0x20) == '\0') || (*(char *)(param_1 + 0x49) != '\0')) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x10))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined8 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = CONCAT44(0xffffffff,(undefined4)local_30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = local_30 & 0xffffffffffffff00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = (ulong)local_40._4_4_ << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (**(code **)(*plVar3 + 0x20)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (plVar3,*(long *)(param_1 + 0x10) + 0x20,&local_48,2,puVar1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
      uVar4 = FUN__text__00573ba0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                                  *(undefined2 *)(*(long *)(param_1 + 0x10) + 0x1c));
      if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*(long *)*puVar1 + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *puVar1 = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  local_48 = _DAT_0070d38f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = _DAT_0070d397; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = _DAT_0070d39f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = _DAT_0070d3a7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0x656c69; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_1 + 0x18) + 0x48))(*(long **)(param_1 + 0x18),&local_48,2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_1 + 0x49) = 1;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


