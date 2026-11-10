/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034D8E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d8e0; name: FUN_.text__0044d8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044d8e0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a45e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    puVar5 = *(undefined8 **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = FUN__text__00447b30(*puVar1,*puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) == 0)) && // [自动静态注释] 条件判断/分支
         (plVar4 = (long *)FUN__text__00400f80(4,0xa0), plVar4 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0047d448(); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(long **)(lVar3 + 0x20) = plVar4;
        plVar4[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar3 + 0x58)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
          (**(code **)*plVar4)(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__00400fc0(4,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(lVar3 + 0x20) = 0;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar5 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar5 != (undefined8 *) // [自动静态注释] 循环/迭代
                       (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


