/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A2ED0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a2ed0; name: FUN_.text__002a2ed0
 */


void FUN__text__002a2ed0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x310,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar2 + 0xb8))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00637458(lVar1,plVar2,0,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x310;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar4 = 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x54); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1ac); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x304); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x45c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x5b4); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x70c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x864); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x9bc); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xb14); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xc6c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xdc4); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xf1c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1074); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x11cc); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1324); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x147c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x15d4); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x172c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1884); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x19dc); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1b34); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1c8c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1de4); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1f3c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x2094); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x21ec); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x2344); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x249c); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x25f4); // [自动静态注释] 调用尚未恢复正式名称的函数
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x274c); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1 = param_1 + 0x2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = lVar4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar4 != 0); // [自动静态注释] 循环/迭代
                    /* WARNING: Could not recover jumptable at 0x002a3188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


