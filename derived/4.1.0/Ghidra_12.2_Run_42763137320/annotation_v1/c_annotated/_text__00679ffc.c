/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00579FFC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679ffc; name: FUN_.text__00679ffc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00679ffc(long *param_1,void *param_2,undefined8 param_3,int param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                       undefined8 *param_5,void *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_6 == (void *)0x0) { // [自动静态注释] 条件判断/分支
    param_6 = (void *)FUN__text__006809c8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = FUN__text__00680a08(param_6,1,0x9d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = lVar3;
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    iVar2 = -0x385; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    memcpy((void *)(lVar3 + 0x890),param_6,0x28); // [自动静态注释] 内存复制、清零或移动
    lVar3 = *param_1 + 0x890; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00685a30(*param_1 + 0x20,0,0,5,0x10,0,0,0,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(*param_1 + 0x94c) = 0xffff;
    *(undefined4 *)(*param_1 + 0x950) = 0;
    *(undefined4 *)(*param_1 + 0x954) = 0;
    *(undefined4 *)(*param_1 + 0x958) = 0;
    *(undefined4 *)(*param_1 + 0x95c) = 0xffff;
    *(undefined1 *)(*param_1 + 0x9ab) = 0;
    *(undefined4 *)(*param_1 + 0x944) = 0x7fffffff;
    *(undefined4 *)(*param_1 + 0x948) = 0x7fffffff;
    *(undefined4 *)(*param_1 + 0x9a0) = 0xffffffff;
    *(undefined1 *)(*param_1 + 0x9a8) = 1;
    if (param_4 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)(*param_1 + 0x9aa) = 1;
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar6 + 0x964) = 0x100001000;
    *(undefined8 *)(lVar6 + 0x96c) = 0xffffffffffff;
    *(undefined8 *)(lVar6 + 0x974) = 0xffffffff00004000;
    lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar6 + 0x980) = 0x100001000;
    *(undefined8 *)(lVar6 + 0x988) = 0xffffffffffff;
    *(undefined8 *)(lVar6 + 0x990) = 0xffffffff00004000;
    *(undefined8 *)(*param_1 + 0x900) = 200;
    *(undefined4 *)(*param_1 + 0x96c) = 100;
    *(undefined8 *)(*param_1 + 0x928) = 0x10000;
    if (param_5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      uVar4 = 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((uVar5 & 1) != 0) && (*(int *)(param_5 + 4) != 0)) { // [自动静态注释] 条件判断/分支
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 1;
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar5 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(*param_1 + 0x96c) = *(undefined4 *)((long)param_5 + 0x14);
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar5 >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(ulong *)(*param_1 + 0x900) = (ulong)*(uint *)(param_5 + 3);
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (((uVar5 >> 2 & 1) != 0) && (*(int *)((long)param_5 + 0x24) != 0)) { // [自动静态注释] 条件判断/分支
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 2;
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (((uVar5 >> 3 & 1) != 0) && (*(int *)(param_5 + 5) != 0)) { // [自动静态注释] 条件判断/分支
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 4;
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar5 >> 5 & 1) != 0) { // [自动静态注释] 条件判断/分支
        lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(undefined8 *)((long)param_5 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = *(undefined8 *)((long)param_5 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = *(undefined8 *)((long)param_5 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar6 + 0x9bd) = *(undefined8 *)((long)param_5 + 0x44);
        *(undefined8 *)(lVar6 + 0x9c5) = uVar9;
        *(undefined8 *)(lVar6 + 0x9ad) = uVar4;
        *(undefined8 *)(lVar6 + 0x9b5) = uVar7;
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar5 >> 7 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(*param_1 + 0x9a4) = *(undefined4 *)((long)param_5 + 0x1c);
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (((uVar5 >> 6 & 1) != 0) && (*(int *)((long)param_5 + 0x2c) != 0)) { // [自动静态注释] 条件判断/分支
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 8;
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar5 >> 8 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(*param_1 + 0x928) = *param_5;
        uVar5 = *(uint *)(param_5 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar5 >> 9 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar4 = 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (((uVar5 >> 10 & 1) != 0) && (*(int *)(param_5 + 6) != 0)) { // [自动静态注释] 条件判断/分支
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 0x10;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    iVar2 = FUN__text__00680ac0(*param_1 + 0x290,uVar4,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
      iVar2 = FUN__text__00680b90(*param_1 + 0x6e8,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
        iVar2 = FUN__text__0068066c(*param_1,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
          uVar1 = *(long *)(*param_1 + 0x928) + 0x4009; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = uVar1 / 0x400a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar1 < 0x400a) { // [自动静态注释] 条件判断/分支
            uVar8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          iVar2 = FUN__text__006832ac(*param_1 + 0x158,0x400a,uVar8,1,10,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
            FUN__text__0067a610(*param_1 + 0x150,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
            memcpy((void *)(*param_1 + 0x7d8),param_2,0xb8); // [自动静态注释] 内存复制、清零或移动
            *(undefined8 *)(*param_1 + 0x8b8) = param_3;
            FUN__text__0067a654(*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (_DAT_008b4680 != 0) { // [自动静态注释] 条件判断/分支
              lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (param_4 != 0) { // [自动静态注释] 条件判断/分支
                if ((*(byte *)(lVar3 + 0x99c) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
                  *(undefined4 *)(lVar3 + 0x280) = 0;
                  *(undefined8 *)(lVar3 + 0x270) = 0x18;
                  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                } // [自动静态注释] 作用域/控制流边界
                *(undefined4 *)(lVar3 + 0x280) = 1;
                return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
              } // [自动静态注释] 作用域/控制流边界
              *(undefined4 *)(lVar3 + 0x280) = 1;
              *(undefined4 *)(*param_1 + 0x198) = 3;
              FUN__text__006834ec(*param_1 + 0x158,0x72144c,0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__006806bc(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00680c74(*param_1 + 0x6e8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      thunk_FUN__text__00680bfc(*param_1 + 0x290); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006809e4(lVar3,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


