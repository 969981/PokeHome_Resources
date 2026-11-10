/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0033D9F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d9f0; name: FUN_.text__0043d9f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0043d9f0(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = (int)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < iVar3) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      cVar1 = *(char *)(*param_1 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (cVar1 == '\x04' || cVar1 == '\x02') { // [自动静态注释] 条件判断/分支
        FUN__text__00435810(*puVar2,*(undefined8 *)(*param_1 + lVar4 * 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar3 = (int)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 < iVar3); // [自动静态注释] 循环/迭代
    if (0 < iVar3) { // [自动静态注释] 条件判断/分支
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        cVar1 = *(char *)(*param_1 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (cVar1 != '\x02' && cVar1 != '\x04') { // [自动静态注释] 条件判断/分支
          FUN__text__00435810(*puVar2,*(undefined8 *)(*param_1 + lVar4 * 8),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar3 = (int)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar5 = lVar5 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar4 < iVar3); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 1) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


