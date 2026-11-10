/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001140E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002140e0; name: FUN_.text__002140e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__002140e0(undefined8 *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_48 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_14 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 2) == 0 || *(char *)((long)param_1 + 0x14) == '\0') { // [自动静态注释] 条件判断/分支
    bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = FUN__text__00215448(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_2 != 1) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    local_50 = *(undefined8 *)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    std::string::assign((char *)local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = *_DAT_0089f528; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = FUN__text__00213f64(param_1 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = FUN__text__00213f68(param_1 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_14[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = FUN__text__00309850(uVar6,&local_60,uVar4,uVar5,local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar1 = iVar2 == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((local_48[0] & 1) != 0) { // [自动静态注释] 条件判断/分支
      operator_delete(local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


