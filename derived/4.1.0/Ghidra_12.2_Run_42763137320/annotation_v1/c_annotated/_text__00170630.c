/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00070630
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00170630; name: FUN_.text__00170630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00170630(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a04f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0012fde8(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_0089f3c0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a14c0 + 0x10;
  plVar10 = param_1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar10 = lVar1;
  pLVar9 = (LightEventType *)FUN__text__005f6af4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar2 = pLVar9 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar2 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__00170734; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar3 = pLVar9 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar3 = (LightEventType)((char)*pLVar3 + '\x01');
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar2 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar9); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar2 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pLVar2 = LVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__00170724; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00170724: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar3 = (LightEventType)((char)*pLVar3 + -1);
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00170734: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar1 = _DAT_0089f3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(_DAT_0089f3c8 + 0x800) == 0x100) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(_DAT_0089f3c8 + *(long *)(_DAT_0089f3c8 + 0x800) * 8) = plVar10;
  *(long *)(lVar1 + 0x800) = *(long *)(lVar1 + 0x800) + 1;
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar9[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar9); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = _DAT_008a14c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar8 = _DAT_008a14d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar8 = plVar10;
  FUN__text__0016afa8(param_1 + 0xc); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x14); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x1c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x24); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x2b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x2c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x2f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x33] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x34); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x37] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x3b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x3c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x3f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x43] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x44); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x47] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x4b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x4c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x4f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x53] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x54); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x57] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x5b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x5c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x5f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[99] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 100); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x67] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x68); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x6b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x6c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x6f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x73] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x74); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x77] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x78); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x7b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x7c); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x7f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x83] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x84); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x87] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x88); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x8b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0016afa8(param_1 + 0x8c); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


