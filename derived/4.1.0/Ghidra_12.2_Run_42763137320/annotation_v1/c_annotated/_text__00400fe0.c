/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00300FE0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00400fe0; name: FUN_.text__00400fe0
 */


void FUN__text__00400fe0(int *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  do { // [自动静态注释] 循环/迭代
    if (*param_1 != -1) { // [自动静态注释] 条件判断/分支
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar7 = *(long *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = nn::os::GetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar7 == lVar5) { // [自动静态注释] 条件判断/分支
        uVar6 = nn::os::GetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0xc) = uVar6;
        param_1[1] = param_1[1] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar3) { // [自动静态注释] 条件判断/分支
            *param_1 = *param_1 + 1;
            cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__00401020; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  goto LAB__text__00401100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while( true ) { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar2 == '\0') break; // [自动静态注释] 条件判断/分支
LAB__text__00401020: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*param_1 != -1) { // [自动静态注释] 条件判断/分支
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar4 = DAT_00ae9648 * 0.01; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__004010b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__00401100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while( true ) { // [自动静态注释] 循环/迭代
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    Yield(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 + (long)fVar4 < lVar7) break; // [自动静态注释] 条件判断/分支
LAB__text__004010b8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*param_1 == -1) { // [自动静态注释] 条件判断/分支
      cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar3) { // [自动静态注释] 条件判断/分支
        *param_1 = 0;
        cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar2 == '\0') goto LAB__text__00401100; // [自动静态注释] 条件判断/分支
      goto LAB__text__004010b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    iVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *param_1 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  if (iVar1 != -1) { // [自动静态注释] 条件判断/分支
    nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 2)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00401100: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = nn::os::GetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  param_1[1] = param_1[1] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


