/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001437E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002437e4; name: FUN_.text__002437e4
 */


void FUN__text__002437e4(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(*(long *)(param_1 + 0x640) + 0xf0) != 0) { // [自动静态注释] 条件判断/分支
    local_50[0] = 0xae55050415d68330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = (long *)FUN__text__0012cdb0(param_1 + 0x110,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(int *)(param_2 + 4) == 0) && (0 < *(int *)(param_3 + 4))) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 0x50))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_1 + 0x708) = 0;
      FUN__text__005e927c(local_50,0x8740c0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003c1e4c(local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_38 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar3 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = FUN__text__003ae458(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00244e30(param_1,*(undefined4 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                                   (*(long *)(lVar3 + 0xe0) + (uVar2 & 0xffffffff) * 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


