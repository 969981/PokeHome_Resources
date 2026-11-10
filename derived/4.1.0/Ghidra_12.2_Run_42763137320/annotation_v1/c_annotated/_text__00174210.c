/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00074210
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00174210; name: FUN_.text__00174210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00174210(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *_DAT_008a1120 = 0;
  if (param_1[8] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[6] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[5] = 0x8675f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar8 = (LightEventType *)FUN__text__005f6af4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = pLVar8 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__00174304; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar2 = pLVar8 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar1 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar8); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__001742f4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__001742f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00174304: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (DAT_00c15c20 == 0) { // [自动静态注释] 条件判断/分支
    __dest = (undefined8 *)&DAT_00c15420; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar9 = DAT_00c15c20 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __dest = _DAT_0089f3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while ((undefined8 *)*__dest != param_1 + 5) { // [自动静态注释] 循环/迭代
      __dest = __dest + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = lVar9 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar9 == 0) goto LAB__text__00174370; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = (undefined8 *)(&DAT_00c15420 + DAT_00c15c20 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__dest != puVar3) { // [自动静态注释] 条件判断/分支
    __src = __dest + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__src != puVar3) { // [自动静态注释] 条件判断/分支
      memmove(__dest,__src,(long)puVar3 - (long)__src); // [自动静态注释] 内存复制、清零或移动
    } // [自动静态注释] 作用域/控制流边界
    DAT_00c15c20 = DAT_00c15c20 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00174370: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar8[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar8); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0x86b890;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


