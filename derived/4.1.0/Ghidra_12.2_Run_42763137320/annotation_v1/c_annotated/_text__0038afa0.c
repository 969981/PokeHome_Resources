/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0028AFA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038afa0; name: FUN_.text__0038afa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038afa0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = _DAT_008a3328 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = _DAT_008a3328 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar4 = (code *)param_1[0x27]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2;
  if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x28] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x29] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x26] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar4)(param_1 + 0x2a); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar4 = (code *)param_1[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar4)(param_1 + 0x1a); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)param_1[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar1 != (long *)0x0) { // [自动静态注释] 循环/迭代
    plVar5 = (long *)plVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar3 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        plVar5[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],lVar3,plVar5[2] - lVar3,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],plVar5,plVar1[5],plVar1[6]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)param_1[0x10] + 0x18))((long *)param_1[0x10],plVar1,0x38,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = param_1[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x0038b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar2,param_1[0xb] << 3,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


