/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00314580
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414580; name: FUN_.text__00414580
 */


void FUN__text__00414580(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = (*(ulong *)(param_1 + 0x38) & param_2) + (ulong)*(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar4 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
    uVar1 = iVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((int)uVar1 < 0) && ((uVar1 & 0x7fffffff) == *(uint *)(lVar3 + 0xc))) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar3 + 0x14) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


