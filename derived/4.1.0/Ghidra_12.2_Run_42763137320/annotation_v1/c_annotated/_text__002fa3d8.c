/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001FA3D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa3d8; name: FUN_.text__002fa3d8
 */


undefined8 FUN__text__002fa3d8(long param_1,long *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x1a8) != 0) { // [自动静态注释] 条件判断/分支
    plVar5 = (long *)FUN__text__002ff034(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*plVar5 == *param_2) { // [自动静态注释] 条件判断/分支
      FUN__text__002ff038(*(undefined8 *)(param_1 + 0x1a8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 0x520) = 1;
        lVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
          plVar5 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        pcVar6 = *(code **)(param_1 + 0x5d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(param_1 + 0x5e0) = 0;
          *(undefined8 *)(param_1 + 0x5e8) = 0;
          *(undefined8 *)(param_1 + 0x5d0) = 0;
          *(undefined8 *)(param_1 + 0x5d8) = 0;
          (*pcVar6)(param_1 + 0x5f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *(long *)(param_1 + 0x5f0) = param_1;
        *(long *)(param_1 + 0x5f8) = lVar1;
        *(long *)(param_1 + 0x600) = lVar3;
        *(long *)(param_1 + 0x608) = lVar2;
        *(long *)(param_1 + 0x610) = lVar4;
        if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
          *(code **)(param_1 + 0x5d0) = FUN__text__002fce00;
          *(code **)(param_1 + 0x5d8) = FUN__text__002fced0;
          *(undefined1 **)(param_1 + 0x5e0) = &LAB__text__002fcf04;
          *(undefined1 **)(param_1 + 0x5e8) = &LAB__text__002fcf40;
          nn::oe::EnterExitRequestHandlingSection(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          plVar5 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(code **)(param_1 + 0x5d0) = FUN__text__002fce00;
          *(code **)(param_1 + 0x5d8) = FUN__text__002fced0;
          *(undefined1 **)(param_1 + 0x5e0) = &LAB__text__002fcf04;
          *(undefined1 **)(param_1 + 0x5e8) = &LAB__text__002fcf40;
          nn::oe::EnterExitRequestHandlingSection(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__002fa508; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002fa508: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


