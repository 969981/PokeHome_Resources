/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0006BE00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016be00; name: FUN_.text__0016be00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016be00(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = _DAT_0089f7b0 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_0089f7b0 + 0x90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x458) = _DAT_0089f7b0 + 0x10;
  *(long *)(param_1 + 0x4a0) = lVar2;
  *(long *)(param_1 + 0x4a8) = lVar1;
  if (*(long *)(param_1 + 0x4b0) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x428) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x428) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x428) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x420) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x420) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x420) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x400) = 0;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x408) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x408),lVar2,*(undefined8 *)(param_1 + 0x410), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x418));
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x3e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0016f2b4(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(**(long **)(param_1 + 1000) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 1000),lVar2,*(undefined8 *)(param_1 + 0x3f0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x3f8));
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001167a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


