/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D7AC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d7ac0; name: FUN_.text__005d7ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d7ac0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < *(int *)(param_1 + 0xa4)) { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar2 = *piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = *(long *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x58) + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      thunk_FUN__text__006ec64c(lVar1,&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006ed12c(lVar4 + (long)iVar2 * 0x168,uVar5 & 0xffffffff,&local_60, // [自动静态注释] 调用尚未恢复正式名称的函数
                          (long)*(int *)(lVar1 + 0x68), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          (long)*(int *)(lVar1 + 0x6c) * (long)*(int *)(lVar1 + 0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0x70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0xa4)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ecfcc(*(long *)(param_2 + 0x58) + (long)*piVar3 * 0x168,param_1 + 0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


