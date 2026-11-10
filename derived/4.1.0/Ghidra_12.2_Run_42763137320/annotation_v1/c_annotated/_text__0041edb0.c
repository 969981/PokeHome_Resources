/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0031EDB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041edb0; name: FUN_.text__0041edb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0041edb0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (uint)*(byte *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0 && uVar5 != 0) { // [自动静态注释] 条件判断/分支
    if ((uVar5 < 0x25) && (_DAT_008ab03c == *(ushort *)(param_1 + 2))) { // [自动静态注释] 条件判断/分支
      plVar1 = &DAT_00aea318 + (uVar5 - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar6 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(lVar4 + -0x20) = lVar6;
        while (*plVar1 == lVar6) { // [自动静态注释] 循环/迭代
          cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar3) { // [自动静态注释] 条件判断/分支
            *plVar1 = lVar4 + -0x20;
            cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar2 == '\0') { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(lVar4 + -0x18) = 0;
            *param_1 = 0;
            *(undefined2 *)(param_1 + 2) = 0;
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(5,lVar4 + -0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


